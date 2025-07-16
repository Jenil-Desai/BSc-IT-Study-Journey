<?php
class Bank {
    public $accountNumber, $accountHolder, $balance;

    function __construct($accNo, $holder, $balance = 0) {
        $this->accountNumber = $accNo;
        $this->accountHolder = $holder;
        $this->balance = $balance;
    }

    function deposit($amt) {
        if ($amt > 0) $this->balance += $amt;
    }

    function withdraw($amt) {
        if ($amt <= $this->balance) $this->balance -= $amt;
    }

    function getBalance() {
        return $this->balance;
    }

    function getAccountInfo() {
        return "$this->accountNumber - $this->accountHolder - $this->balance";
    }
}
?>
