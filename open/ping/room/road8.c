// Room: /open/ping/room/road8
inherit ROOM;

void create ()
{
  set ("short", "ʯ�幰��");
  set ("long", @LONG
������һ��ʯ�幰��,��Խ��һ�����ȵ�СϪ,СϪ��С,ȴ
�������,����Ϊ�˽���ʯ�����,���ǷѾ�������!!
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road9",
  "north" : __DIR__"road4",
]));
  set("outdoors", "/open/ping");

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
