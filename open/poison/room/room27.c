inherit ROOM;

void create ()
{
  set ("short", "�ٲ�");
  set ("long", @LONG
ԭ���ղŵĻ�������һ���ٲ��� ,̧ͷ������һйǧ������� ,
��ͻȻ�����ƺ���һ��С�������ٲ�Դͷ ,��ͷһ�� ,����һ��
С·˳��Ϫ������ ,�� .....���������ߺè� ?

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room26",
  "northup" : __DIR__"room35",
  "northwest" : __DIR__"room37",
]));
  setup();
}


