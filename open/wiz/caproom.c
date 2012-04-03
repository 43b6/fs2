// Room: /open/wiz/caproom
inherit ROOM;

void create ()
{
  set ("short", "����ģ����");
  set ("long", @LONG
�����������и�ģ�ͣ��������ƺ��Ǿ��ǵ���Ӱ��
��������ʦ�۵�������Χ��ģ����ϸ�Ĺ۲��š�
�ǵģ��Ǿ������ǡ����ǰ����ϵۡ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"area",
  "d01" : "/open/capital/room/D01",
  "d02" : "/open/capital/room/D02",
  "d03" : "/open/capital/room/D03",
]));

  set("no_fight", 1);

  set("light_up", 1);

  set("no_clean_up", 0);

  set("no_magic", 1);

  set("file_name", __DIR__"caproom");

  set("valid_startroom", 0);


  setup();
call_other("/obj/board/capital_b","???");
}
