// Room: /open/poison/room/path8
inherit ROOM;

void create ()
{
  set ("short", "�ܵ�");
  set ("long", @LONG
����Ӧ�þ�������η���ĺ��ġ����������ɣ����߿ɼ�
�����˸е���ů���ĵĹ��ߣ�����Ǳ��Ǵ��ܵ��ĳ��ڣ���
�Ծ����㱻�ǹ��������������뾡���뿪����ɭʪ�䣬�ֳ�
��Σ���Ĺ�ط���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/poison/room/path7",
  "northwest" : "/open/poison/room/path9",
]));

  setup();
}
