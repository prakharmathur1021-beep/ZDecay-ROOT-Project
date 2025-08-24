void ZDecay() {
    const double MZ = 91.2;   // Z boson mass in GeV
    const double GammaZ = 2.5; // Z boson width in GeV

    TH1F *h = new TH1F("h","Z -> e^{+}e^{-}; E_{e} (GeV); Events",100,30,70);

    for (int i = 0; i < 100000; i++) {
        double mz = gRandom->BreitWigner(MZ, GammaZ); // generate Z mass
        double Ee = mz / 2.0; // electron energy in rest frame
        h->Fill(Ee);
    }

    TCanvas *c = new TCanvas("c","ZDecay",800,600);
    h->Draw();
    c->Update();
    c->SaveAs("/mnt/c/Users/Prakhar Mathur/Downloads/ZDecay.png");
}
ZDecay();
