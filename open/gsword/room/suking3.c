// Room: /u/s/smore/room/suking/suking3.c

inherit ROOM;

void create ()
{
  set ("short", "���ô���");
  set ("long", @LONG
�߽����������Χ���µ��������㲻���Ĵ��ҿ�����������
Ȼ���Ըо��õ����ܵ�װ�������ûʣ��ֲ��������ף��ɼ���
������Ҳ����һ��ֻ���ս�Ĳݰ�.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/gsword/room/suking1",
  "west" : "/open/gsword/room/suking4",
  "north" : "/open/gsword/room/suking6",
  "east" : "/open/gsword/room/suking2",
]));

  set("light_up", 1);

  setup();
}
