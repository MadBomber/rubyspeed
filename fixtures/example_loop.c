int example_loop(VALUE arr){int sum = (((0)));long len = rb_array_len(arr);for (int i = 0; i < len; i++) {int el = FIX2INT(rb_ary_entry(arr,i));sum += (el);}return sum;}