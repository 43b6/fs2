// Room: /u/s/smore/room/suking/suking2.c

inherit ROOM;

void create ()
{
  set ("short", "���ô���");
  set ("long", @LONG
�߽����������Χ���µ��������㲻���Ĵ��ҿ�����������
Ȼ���Ըо��õ����ܵ�װ�������ûʣ��ֲ��������׿ɼ��󽫾�
����Ҳ����һ��ֻ���ս�Ĳݰ�.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/gsword/room/suking3",
  "north" : "/open/gsword/room/suking7",
  "east" : "/open/gsword/room/suking9",
]));

  set("light_up", 1);

  setup();
}
