// Room: /u/s/smore/room/suking/suking8+.c

inherit ROOM;

void create ()
{
  set ("short", "����ϯ");
  set ("long", @LONG
������ǽ���ϯ��Ҳ����ƽ���󽫾�������ƽ�հ촦����
�ĵط���������Ȼ����Ѿ��ϴ�С�ˣ����Ǵ������񵹻���
�������ɣ��ⲻ��ֻ�ǽ����Ĺ����ɹ�������������ʦү���ű�
Ҳ����������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/suking11+",
  "south" : "/open/gsword/room/suking6.c",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/zuozhen" : 1,
  "/open/gsword/mob/zhang" : 1,
]));

  set("light_up", 1);

  setup();
}
