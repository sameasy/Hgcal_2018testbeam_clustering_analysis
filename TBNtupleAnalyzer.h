///////////////////////////o///////////////////////////////
// This class has been automatically generated on
// Tue Feb 14 12:16:39 2023 by ROOT version 6.18/04
// from TTree relevant_branches/relevant_branches
// found on file: ntuple_selection_data_em_415.root
//////////////////////////////////////////////////////////

#ifndef TBNtupleAnalyzer_h
#define TBNtupleAnalyzer_h


#include <TChain.h>
#include <TFile.h>
#include <TROOT.h>
// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
using namespace std;

class TBNtupleAnalyzer {
public :
   TBNtupleAnalyzer(TTree *  = 0) : fChain(0) {}
  ~TBNtupleAnalyzer(){}
   // Int_t    Cut(Long64_t entry);
   Int_t GetEntry(Long64_t entry, Int_t getall = 0) {
     return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0;
   }
   //Long64_t LoadTree(Long64_t entry);
   void     Init(TTree *tree);
   //void     Loop();
   Bool_t   Notify();
   //void     Show(Long64_t entry = -1);

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          event;
   UInt_t          run;
   UInt_t          NRechits;
   vector<unsigned int> *ce_clean_detid;
   vector<float>   *ce_clean_x;
   vector<float>   *ce_clean_y;
   vector<float>   *ce_clean_z;
   vector<unsigned int> *ce_clean_layer;
   vector<float>   *ce_clean_energy_MeV;
   Float_t         beamEnergy;
   vector<float>   *impactX_shifted;
   vector<float>   *impactY_shifted;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_run;   //!
   TBranch        *b_NRechits;   //!
   TBranch        *b_ce_clean_detid;   //!
   TBranch        *b_ce_clean_x;   //!
   TBranch        *b_ce_clean_y;   //!
   TBranch        *b_ce_clean_z;   //!
   TBranch        *b_ce_clean_layer;   //!
   TBranch        *b_ce_clean_energy_MeV;   //!
   TBranch        *b_beamEnergy;   //!
   TBranch        *b_impactX_shifted;   //!
   TBranch        *b_impactY_shifted;   //!

   //   TBNtupleAnalyzer(TTree * tree = 0);
//   Tree *fChain;  //! pointer to the analyzed TTree or TChain
   // TTree          *fChain2;   //!pointer to the analyzed TTree or TChain
   // TTree          *fChain3;   //!pointer to the analyzed TTree or TChain
//   Int_t fCurrent;  //! current Tree number in a TChain  
   

};

#endif

#ifdef TBNtupleAnalyzer_cxx



void TBNtupleAnalyzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   ce_clean_detid = 0;
   ce_clean_x = 0;
   ce_clean_y = 0;
   ce_clean_z = 0;
   ce_clean_layer = 0;
   ce_clean_energy_MeV = 0;
   impactX_shifted = 0;
   impactY_shifted = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("NRechits", &NRechits, &b_NRechits);
   fChain->SetBranchAddress("ce_clean_detid", &ce_clean_detid, &b_ce_clean_detid);
   fChain->SetBranchAddress("ce_clean_x", &ce_clean_x, &b_ce_clean_x);
   fChain->SetBranchAddress("ce_clean_y", &ce_clean_y, &b_ce_clean_y);
   fChain->SetBranchAddress("ce_clean_z", &ce_clean_z, &b_ce_clean_z);
   fChain->SetBranchAddress("ce_clean_layer", &ce_clean_layer, &b_ce_clean_layer);
   fChain->SetBranchAddress("ce_clean_energy_MeV", &ce_clean_energy_MeV, &b_ce_clean_energy_MeV);
   fChain->SetBranchAddress("beamEnergy", &beamEnergy, &b_beamEnergy);
   fChain->SetBranchAddress("impactX_shifted", &impactX_shifted, &b_impactX_shifted);
   fChain->SetBranchAddress("impactY_shifted", &impactY_shifted, &b_impactY_shifted);
   Notify();
}

Bool_t TBNtupleAnalyzer::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef TBNtupleAnalyzer_cxx
