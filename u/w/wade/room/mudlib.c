inherit ROOM;

void create ()
{
  set ("short", "LPC ˵��֮ ��� -- mudlib");
  set("long", @LONG
�����������߽�ȥ�� LPC ��ʽ����.  driver ������һ�� game, ֻ��һ
�γ�ʽ, �����㴴��һ����ʹ���ߵĻ���, ����԰� LPC ���һ�� C ����
�ı����ʽ, �� mudlib ����ñ����ʽ�ĺ�ʽ��(�ܴ��Եı���).
mudlib ���峣����ʹ�õ������, ���� /std/room.c �� /std/user.c
LONG);

  set("exits", ([
	"back"	: __DIR__"doc",
  ]) );
  setup();
}
