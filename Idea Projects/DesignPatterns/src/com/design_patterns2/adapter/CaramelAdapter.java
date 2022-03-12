package com.design_patterns2.adapter;

import com.design_patterns2.adapter.avaFilter.Caramel;

public class CaramelAdapter extends Caramel implements Filter {

    @Override
    public void apply(Image image) {
        init();
        render(image);
    }
}
