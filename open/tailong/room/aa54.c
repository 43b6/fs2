inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������һ���������Ƶ���,���Ͽ��Ŷ������������"ħ��",��
�������������������֮��--"����"������֮һ,����������ȴ��
������ȥ�����,���������ɻ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"aa50",
  "northeast" : __DIR__"aa51",
  "southeast" : __DIR__"aa52",
  "southwest" : __DIR__"aa53",
]));
}
