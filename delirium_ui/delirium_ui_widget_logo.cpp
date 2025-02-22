
#include "delirium_ui.hpp"
#include <sstream>

//-------------------------------------------------------------------------------------------


void Delirium_UI_Widget_Logo::Draw(cairo_t* cr)
{
	float widget_x_position = x_position * x_grid_size;
	float widget_y_position = y_position * y_grid_size;
	// float widget_width = width * x_grid_size;
	// float widget_height = height * y_grid_size;

	// float x = widget_x_position;
	// float y = widget_y_position;
	// float w = widget_width;
	// float h = widget_height;

	cairo_save(cr);
	cairo_translate(cr, widget_x_position, widget_y_position);
	cairo_scale(cr,1.0/(x_grid_size/width),1.0/(y_grid_size/height));
	cairo_set_source_surface(cr, logo_image,0,0);
	cairo_paint(cr); 
	cairo_restore(cr);
}


//----------------------------------------------------------------------------------------------------------------------------------------
// LEFT MOUSE BUTTON PRESSED

void Delirium_UI_Widget_Logo::Left_Button_Press(int xm, int ym)
{
	(void) xm;
	(void) ym;
}



