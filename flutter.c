await FirebaseAuth.instance.verifyPhoneNumber(
  phoneNumber: '+1234567890',
  verificationCompleted: (PhoneAuthCredential credential) async {
    await FirebaseAuth.instance.signInWithCredential(credential);
  },
  verificationFailed: (FirebaseAuthException e) {
    print('Verification failed: $e');
  },
  codeSent: (String verificationId, int? resendToken) {
    // Save verificationId and prompt user to enter code
  },
  codeAutoRetrievalTimeout: (String verificationId) {},
);
