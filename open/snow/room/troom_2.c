// Room: /u/e/eiei/work/troom_2.c
inherit ROOM;

void create ()
{
  set ("short", "�ּ�С·");
  set ("long", @LONG
    �������ţ��㷢���ƺ�Խ��ɽ���ߣ�·����������
    �滨�������Խ��Խ���죬������һЩ������ɫ��ƽ��
    �Ǹ��������ܿ����ģ����һ���Ʈɢ�����ķ���Ҳ����
    ����û���Ź��ģ������Ժ�������һ��ƮƮ���ɵĸ�
    ����
LONG);

  set("outdoors", "/u/e/eiei/workroom");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"troom_3.c",
  "south" : __DIR__"troom_1.c",
]));

  setup();
}
