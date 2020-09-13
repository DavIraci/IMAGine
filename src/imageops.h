/* methods for images */

struct utils * getWidth(struct symref * v);
struct utils * getHeight(struct symref * v);
struct utils * getBands(struct symref * v);
struct utils * min(struct symref * v);
struct utils * max(struct symref * v);
struct utils * average(struct symref * v);
struct utils * invert(struct symref * l,struct ast * v);                                  
struct utils * histeq(struct symref * l,struct ast * v);
struct utils * norm(struct symref * l,struct ast * v);
struct utils * canny(struct symref * l,struct ast * v);
struct utils * sobel(struct symref * l,struct ast * v);
struct utils * sharpen(struct symref * l,struct ast * v);
struct utils * convert(struct symref * l,struct ast * v);
struct utils * toColorSpace(struct symref * l,struct ast * v,struct ast * s);
struct utils * add(struct symref * l,struct symref * r,struct ast * p);                   
struct utils * subtract_img(struct symref * l,struct symref * r,struct ast * p);          
struct utils * rotate(struct symref * l,struct ast * v,struct ast * s);
struct utils * flip(struct symref * l,struct ast * v,struct ast * s);
struct utils * gaussianBlur(struct symref * l,struct ast * v,struct ast * s);
struct utils * smartCrop(struct symref * l,struct symref * r,struct ast * width,struct ast * height);
struct utils * zoom(struct symref * l,struct symref * r,struct ast * xfactor,struct ast * yfactor);
struct utils * crop(struct symref * l,struct symref * r,struct ast * left,struct ast * top,struct ast * width,struct ast * height);
void showImg(struct symref * l); // Deprecated 

void saveImage(char * in, VipsImage * out, char * path);