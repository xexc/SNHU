#ifndef Banking_H_
#define Banking_H_

class Banking {
    public:
        Banking(double investment, double monthDeposit, double rate, int years);
        virtual ~Banking();
        void rprtNoMonthlyDepos();
        void rprtWithMonthlyDepos();


    private:
        double initialDepo;
        double monthlyDepo;
        double interestRate;
        int numYears;
};
#endif
