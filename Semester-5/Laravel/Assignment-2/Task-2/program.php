<?
class Logger {
  public function logMessage($msg) {
    echo $msg . PHP_EOL;
  }
}

$userLogger = new class extends Logger {
  public function logMessage($msg) {
    echo "[USER] " . $msg . PHP_EOL;
  }
};

$errorLogger = new class extends Logger {
  public function logMessage($msg) {
    echo "[ERROR] " . $msg . PHP_EOL;
  }
};

$infoLogger = new class extends Logger {
  public function logMessage($msg) {
    echo "[INFO] " . $msg . PHP_EOL;
  }
};

$userLogger->logMessage("User logged in");
$errorLogger->logMessage("An error occurred");
$infoLogger->logMessage("System information");
?>
