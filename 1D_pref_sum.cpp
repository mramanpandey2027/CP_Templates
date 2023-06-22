vi psum(const vi& a) {
    vi psum(si(a)+1);
    for (int i = 0; i < si(a); ++i)
        psum[i+1] = psum[i]+a[i];
    
    return psum;
}