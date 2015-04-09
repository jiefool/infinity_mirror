require 'rmagick'
require 'fileutils'

def get_pixel_rgb_value(pixel)
  r_8bit = pixel.red / 257;
  g_8bit = pixel.green / 257;
  b_8bit = pixel.blue / 257;
  "0x%02X%02X%02X" % [r_8bit, g_8bit, b_8bit]
end

def get_img_rgb_color(img)
  columns = []
  img.each_pixel do |pixel, c, r|
    if columns[c].nil?
      columns[c] = []
    end
    columns[c].push(get_pixel_rgb_value(pixel))
  end
  (0..7).step(2).each do |i|
    columns[i].reverse!
  end
  columns.flatten!
end

def get_img_rgb_color_unreverse(img)
  columns = []
  img.each_pixel do |pixel, c, r|
    if columns[c].nil?
      columns[c] = []
    end
    columns[c].push(get_pixel_rgb_value(pixel))
  end
  columns
end

def scale_img_to_8x8(file)
  img = Magick::Image::read(file).first
  img.scale(8, 8)
end

def write_img_to_file(file, img)
  img.write file
end

if __FILE__ == $PROGRAM_NAME
  gif_img = ARGV[0]

  unless gif_img.nil?
    dirname = 'extracted_gif'
    FileUtils.rm_rf dirname
    Dir.mkdir dirname
    `convert #{gif_img} #{dirname}/gif.png`
    files = Dir["#{dirname}/*"]
    image_colors = []    
    files.each do |file|
      img_file = File.new(file)
      img_file = scale_img_to_8x8 img_file
      image_colors << get_img_rgb_color(img_file.flop)
      # write_img_to_file("scaled_img#{count}.png", img_file)
      # count += 1
    end
    count = 0
    `rm -rf anim_gif.h`
    # image_colors.each do |image_color|        
    #   File.open("anim_gif.h", 'a') { |file| file.write("uint32_t [64]=#{image_color.inspect.gsub('[','{').gsub(']', '}').gsub('"','')};\n") }
    #   count+=1
    # end
    File.open("anim_gif.h", 'w') { |file| file.write("uint32_t anim_gif[][64]=#{image_colors.inspect.gsub('[','{').gsub(']', '}').gsub('"','')};") }
  else
    puts "No input gif image."
  end
end

