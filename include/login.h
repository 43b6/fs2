#ifndef __LOGIN__
#define __LOGIN__

#define LOGIN_TIMEOUT			300

#define WELCOME				"/adm/etc/welcome"
#define NEW_PLAYER_INFO			"/adm/etc/new_player"
#define MOTD				"/adm/etc/motd"
#define WIZ_MOTD			"/adm/etc/motd.wiz"
#define WIZLIST				"/adm/etc/wizlist"
#define WIZBOSS				"/adm/etc/wizboss"
#define COP_HEAD                        "/open/common/npc/cop"
#define CHECK_MAIL		        "/adm/etc/check_mail"
#define BANNED_IP           		"/adm/etc/banned_ip"
#define STARTROOM           		"/open/newhand/newhand"
#define DEATHROOM			"/open/death/start"
#define REVIVEROOM                      "/open/common/room/inn"

// This is how much users can 'enter' the mud actually. Maintained
// by LOGIN_D. The max number of connections can be built between
// server(MudOS) and users' client(telnet) is specified in MudOS
// config file, which must be larger than MAX_USER to allow users
// including wizards and admins have chance to connect.
// By Annihilator (02-22-95)
//#define MAX_USERS    500 // ƽʱ��������
//#define MAX_USERS_2  500 // tintin��������

// multi login �������� by ACKY
#define MAX_MULTI_USUAL		10 // ƽ��ʱ��
#define MAX_MULTI_UNUSUAL	20 // ��ƽʱʱ��
#define MAX_MULTI_SPECIAL	20 // ����IP (����:��רȫ������ͬһIP)

// This defines the robot checker room. All susspecious robot player
// will be transfered to this room. You should give a chance for those
// non-robot player to return to the world.
// By Annihilator (05-26-95)
#define ROBOT_CHECK			"/open/wiz/courthouse"

// ��Ҫ�����������, ���԰� undef �ĳ� define, Ȼ�� update /adm/daemons/logind
// ��֮, Ҫȡ����� define �ĳ� undef, ��ȻҲҪ update /adm/daemons/logind
// ��������������������, ��� MAX_USERS ����ֵ.
#define LOCK_PLAYER  "\n\nsorry. ����������\n\n\n"
#undef LOCK_WIZARD "\n\n��ʦ������ 140.122.77.123 1234 ����������.\n\n\n"

#endif
