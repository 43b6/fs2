inherit ROOM;

void create ()
{
  set ("short", "l����");
  set ("long", @LONG
������һ���������Ƶ���,���Ͽ��Ŷ������������"����",��
�������������������֮��--"����"������֮һ,����������ȴ��
������ȥ�����,���������ɻ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "northeast" : __DIR__"aa45",
  "northwest" : __DIR__"aa46",
  "southwest" : __DIR__"aa47",
  "southeast" : __DIR__"aa48",
]));
}
