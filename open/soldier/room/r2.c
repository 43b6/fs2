
inherit ROOM;
void create()
{
  set ("short", "����");
  set ("long","
    ����ʿ��������Է��ĵط�����ȻС��һ�㣬���Ǹ�
�еĶ��������У���Ȼ����ȸ��С�����ȫ���㿴���Ա�
�Ĵ򷹱�æ�Ĳ����ֺ���һ��Ƿ������ӡ�

 ");
   set("exits", ([
   "north"   : __DIR__"r1.c",
   "west"    : __DIR__"r3.c",
  ]));      
  set("light_up", 1);
  setup();
} 
