// Room: /open/poison/room/path6
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
�㷢��������Ѫ�����������۽��۵ģ�ǽ���ϻ�����
����������ӡ����Щ��ӡ����ޱȣ�Ī�Ǿ��Ƕ������µĺ�
�������ϰ׹ǳɶѣ����뵱ʱս���ǺεȵĲ��ң������Ѳ�
������Ǻųơ���ħ��ս��֮�۵ĵط���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/poison/room/path5",
  "north" : "/open/poison/room/path7",
]));

  setup();
}
