
inherit ROOM;
void create()
{
  set ("short", "�ߵ�");
  set ("long","
    ���������Ϻ�����Щ��������Ѳ��������Ҳ��һ����
�����ƺ�����ͨ����ĵط����������������������ζ��
�������е����˷�θ��

 ");
   set("exits", ([
   "southeast"   : __DIR__"r9.c",
   "southwest"   : __DIR__"r11.c",
   "north"       : __DIR__"r3.c",
   
  ]));      
  set("light_up", 1);
  setup();
} 
