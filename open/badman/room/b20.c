inherit ROOM;

void create ()
{
 set ("short", "������");
 set ("long", @LONG
������ǵ���ͷ�ӽ���ľ������ɵ��ݴ�ɵķ��ӣ����صİ���
�����������벻���������𾩳ǵġ��ټ���ѧ�����ھ����ǵض�����
����ª��С�ݡ���ǰ������ڴ�Ե��������ӣ�Ӧ�þ��ǽ����˰ɣ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/bandit/bandit_master.c" : 1,
]));
  set("light",1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"b12",
]));
  
  setup();
}
