void start_thread(){
    pthred t; 
    t.start(srs_loop);
}

void srs_loop(){
    sleep(10);
    for ue in ues:
        srsiq = het_srs_ue(ue.rnti)
        e2smbuff = get_e2sm_buffer(iq)
    handlemessage.send()
}