
inherit ROOM;
void create()
{
  set ("short", "�ߵ�");
  set ("long","
    ��վ��������ϡ�����Լ���һ������⣬�˵������
���м���ֵķ��䣬���ҵƻ�ͨ����������ֵ����ӣ���
����ǰ�п���һЩ�֡�

             <----XXX    ����---->

 ");
   set("exits", ([
   "east"   : __DIR__"r2.c",
   "west"    : __DIR__"r4.c",
  "south"    : __DIR__"r5.c",
  ]));      
  set("light_up", 1);
  setup();
} 
