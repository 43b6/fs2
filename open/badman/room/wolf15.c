inherit ROOM;
void create()
{
   set ("short","С��");
  set ("long",@LONG
���￴����������·�ľ�ͷ ,��ǰ����һ��������ɽ�� .������һ
���� .�ӷ���ɢ�������İ�����ɱ�� ,�㲻����������ֻ������ԭ��
 ,Ҳͬʱ֪�������е�����ز��� .
LONG);


  set("outdoors","/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wolf12.c",
  "enter" : __DIR__"wolf16.c",
]));

  setup();
}
