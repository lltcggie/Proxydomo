/* ===================================
�@�@�@�@�@�@�@Proxydomo�@�@�@�@�@�@�@�@�@�@�@�@
 ==================================== */
 
���͂��߂�
���̃\�t�g�̓��[�J���œ����v���N�V�t�B���^�����O�\�t�g�ł�
�쐬�ɂ�����I�[�v���\�[�X��Proximodo���g���č���Ă��܂��B

���g����
�N�����ā@127.0.0.1:6060(�v���N�V�|�[�g�ɕ\������Ă鐔�l)���v���N�V�Ƃ��Ďw�肷���
�v���N�V�t�B���^�Ƃ��ċ@�\���܂��B
�ڂ����g������Proxomitron�Ȃǂ��Q�l�ɂ��Ă��������B

$LST�̎w����@�� lists�t�H���_�ȉ��ɂ���e�L�X�g����g���q�����������̂ł�
����: lists\Kill.txt -> $LST(Kill)

�����m�̃o�O
�E�ꕔ�������Ă��Ȃ��R�}���h������܂�($ADDLSTBOX�Ȃ�)

���Ɛ�
���(�����ҁ����ώ�)�́A���̃\�t�g�ɂ���Đ������@���Ȃ鑹�Q�ɂ��A
�C����X�V���A�ӔC�𕉂�Ȃ����ƂƂ��܂��B
�g�p�ɂ������ẮA���ȐӔC�ł��肢���܂��B
 
��������Ή��L��URL�ɂ��郁�[���t�H�[���ɂ��肢���܂��B
http://www31.atwiki.jp/lafe/pages/33.html
 
�����쌠�\��
Copyright (C) 2004 Antony BOUCHER
Copyright (C) 2013 amate
 
 �摜�̈ꕔ�ɁuVS2010ImageLibrary�v�̈ꕔ���g�p���Ă��܂��B
 
���r���h�ɂ���
Visual Studio 2015 Community���K�v�ł�
�r���h�ɂ� boost(1.58~)�� zlib(v1.2.8~) �� WTL(v90_4140~) �� ICU(v55.1~) �� wolfSSL(v3.6.0~) ���K�v�Ȃ̂ł��ꂼ��p�ӂ��Ă��������B

��boost
http://www.boost.org/

��zlib
http://zlib.net/

��ICU
http://site.icu-project.org/

��WTL
http://sourceforge.net/projects/wtl/

��wolfSSL
http://www.wolfssl.com/yaSSL/Home.html

���R���p�C���ς�dll
zlib�̃R���p�C���ς�dll�����L��URL�Ō��J���Ă��܂�
http://1drv.ms/1vqvcaG


zlib�̃w�b�_�̏ꏊ
$(SolutionDir)zlib\x86\include
$(SolutionDir)zlib\x64\include
zlib�̃��C�u�����̏ꏊ
$(SolutionDir)zlib\x86\lib
$(SolutionDir)zlib\x64\lib
���ȉ��̏ꏊ�ɂ���΂Ƃ��ɐݒ�͂���Ȃ��͂��ł�
����ȊO�̏ꏊ��zlib��u���Ă���Ȃ�K����zlibbuffer.h/cpp���C�����Ă�������

ICU ��
$(SolutionDir)icu\Win32 or Win64 �t�H���_�� include �� lib ������΃R���p�C���ʂ�悤�ɂȂ��Ă��܂�

boost::shared_mutex���g�p����̂�boost::thread�̃��C�u�������K�v�ɂȂ�܂�
 Boost���C�u�����̃r���h���@
 https://sites.google.com/site/boostjp/howtobuild
�R�}���h���C��
// x86
b2.exe install -j 4 --prefix=lib toolset=msvc-14.0 runtime-link=static --with-thread --with-date_time --with-timer --with-log
// x64
b2.exe install -j 4 --prefix=lib64 toolset=msvc-14.0 runtime-link=static address-model=64 --with-thread --with-date_time --with-timer --with-log

��wolfssl
$(SolutionDir)wolfssl\wolfssl.vcxproj
�̃v���W�F�N�g��ǂݍ��ނ悤�ɂ��Ă���̂�
���Ƃ̓v���v���Z�b�T�̒�`�̕ύX��������΃r���h���ʂ�悤�ɂ��Ă��܂�

����ȊO�̏ꍇ
wolfssl���\�����[�V�����G�N�X�v���[���[�ɓǂݍ��܂�Ă��Ȃ��ƃr���h���ʂ�Ȃ��̂�
��x�����ăv���W�F�N�g��ǉ�����K�v������܂�

Proxydomo�̃\�����[�V�����G�N�X�v���[���[����wolfssl�̃v���W�F�N�g���폜����
�����̃v���W�F�N�g�̒ǉ��� wolfssl\wolfssl.vcxproj ��ǉ����Ă�������

wolfssl�̃v���p�e�B�y�[�W�Ńv���v���Z�b�T->�v���v���Z�b�T�̒�`�̓��e���ȉ��̓��e�ɏ���������

���v���v���Z�b�T�̒�`�̕ύX
// for Debug/Release Win32
WOLFSSL_CERT_GEN
WOLFSSL_KEY_GEN
HAVE_AESGCM
HAVE_AESCCM
HAVE_CAMELLIA
HAVE_ECC
HAVE_OCSP
HAVE_TLS_EXTENSIONS
HAVE_SESSION_TICKET
HAVE_SNI
HAVE_SECURE_RENEGOTIATION
HAVE_SUPPORTED_CURVES
HAVE_CERTIFICATE_STATUS_REQUEST_V2
WOLFSSL_RIPEMD
WOLFSSL_SHA384
WOLFSSL_SHA512
WOLFSSL_STATIC_RSA
NO_RC4
NO_HC128
NO_PSK

// for Debug/Release x64
WOLFSSL_CERT_GEN
WOLFSSL_KEY_GEN
HAVE_AESGCM
HAVE_AESCCM
HAVE_CAMELLIA
HAVE_ECC
HAVE_OCSP
HAVE_TLS_EXTENSIONS
HAVE_SESSION_TICKET
HAVE_SNI
HAVE_SECURE_RENEGOTIATION
HAVE_SUPPORTED_CURVES
HAVE_CERTIFICATE_STATUS_REQUEST_V2
WOLFSSL_RIPEMD
WOLFSSL_SHA384
WOLFSSL_SHA512
WOLFSSL_STATIC_RSA
NO_RC4
NO_HC128
NO_PSK
WOLFSSL_AESNI

wolfssl�̃v���p�e�B�y�[�W C/C++ -> �R�[�h����
�����^�C�����C�u������ �\����Debug �Ȃ�"�}���`�X���b�h �f�o�b�O (/MTd)" �֕ύX
Release�Ȃ�"�}���`�X���b�h (/MT)" �֕ύX���Ă�������

�v���W�F�N�g�̈ˑ��֌W�̐ݒ�� �v���W�F�N�g:Proxydomo �ˑ����wolfssl �Ƀ`�F�b�N�����Ă�������
�\�����[�V�����G�N�X�v���[���[�ɂ���Proxydomo��"�Q��"�� wolfssl ��ǉ����Ă�������

����Ńr���h���ʂ�͂��ł�


v1.66�̈ȉ��̏C����wolfSSL���̃\�[�X���C������K�v������܂�
�E�T�[�o�[���瑗���Ă��郋�[�gCA�ؖ��������������Ƃ�"ASN no signer error to confirm failure"�̌x�����o��̂��C��
internal.c�� 4305�s�ڂ������

// before
WOLFSSL_MSG("Failed to verify CA from chain");

// after
WOLFSSL_MSG("Failed to verify CA from chain");

if (count > 2) {
	if (ret == ASN_NO_SIGNER_E || ret == ASN_SIG_CONFIRM_E) {
		ret = 0;	// �ŏ�ʂ̂݌�����
	}
}
// ==============================================

���J���x��
https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=D4WWS368DZKPS
