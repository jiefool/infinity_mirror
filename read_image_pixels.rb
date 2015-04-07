require 'rmagick'
require 'benchmark'

def get_pixel_rgb_value(pixel)
  r_8bit = pixel.red / 257;
  g_8bit = pixel.green / 257;
  b_8bit = pixel.blue / 257;
  "0x%02X%02X%02X" % [r_8bit, g_8bit, b_8bit]
end

def get_img_rgb_color(img)
  colors = []
  img.each_pixel do |pixel, c, r|
    colors.push(get_pixel_rgb_value(pixel))
  end
  colors
end

def scale_img_to_8x8(file)
  img = Magick::Image::read(file).first
  img.scale(8, 8)
end

def write_img_to_file(file, img)
  img.write file
end

if __FILE__ == $PROGRAM_NAME
  files = %w(swirl.jpg)
  image_colors = {}
  files.each do |file|
    img_file = File.new(file)
    # img_file = scale_img_to_8x8 img_file
    img_file = Magick::Image::read(img_file).first
    image_colors[file] = get_img_rgb_color(img_file)
    write_img_to_file("scaled_#{file}", img_file)
  end
  puts image_colors
end

