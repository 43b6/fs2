// Room: /open/capital/room/h05.c

inherit ROOM;

void create ()
{
  set ("short", "��ȵ��ͬ");
  set ("long", @LONG
�����ȵ��ͬ, ���ر�ĵط����ǵ��ϳ���ĸɾ�, ��������ҡҷ
, ������ȴ��һƬҶ��Ҳû��, �Ĵ���ɨ�ĸɸɾ�������ϸ����һ��,
�������ƺ�������һ��Ũ����ҩζ, ����Ǿ�����󲿷ֵ�ҩ�궼����
�����Ե�ʡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r67",
  "east" : "/open/capital/room/h06",
]));

  set("outdoors", "/open/capital");


  setup();
}
