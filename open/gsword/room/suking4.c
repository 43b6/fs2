// Room: /u/s/smore/room/suking/suking4.c

inherit ROOM;

void create ()
{
  set ("short", "���ô���");
  set ("long", @LONG
�߽����������Χ���µ��������㲻���Ĵ��ҿ�����������
Ȼ���Ըо��õ����ܵ�װ�������ûʣ��ֲ��������׿ɼ��󽫾�
����Ҳ����һ��ֻ���ս�Ĳݰ�.
    ����ȥ�Ǳ��Ǿн�����ļ������򱱿��Ե���������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/gsword/room/suking13",
  "north" : "/open/gsword/room/suking5",
  "east" : "/open/gsword/room/suking3",
]));

  set("light_up", 1);

  setup();
}
