inherit ROOM;

void create()
{
   set("short","ʯ��");
   set("long",@LONG
�����ǵ���֣ʿ���չ��о���ѧ�����ɵ�ʯ�ң��������ܵ�ǽ���ϣ�
�������������Σ�ÿ�����ζ����Ų�ͬ�����ƣ��������轣һ�㣬����ע
������Щ����ʱ����������֣ʿ������Ӱһ�㣬�����书���Ǿ���֮��ѧ
�����㲻�������˽�����������Ӱ�趯����������֪�����䣬��Ľ�����
����һ��¥��
 

LONG);
  
   set("exits", ([ /* sizeof() == ? */
   "leave" : "/open/gsword/room/h-3.c",
   ]));
   
   set("valid_startroom", 1);
   set("no_clean_up",1);
       set("no_transmit", 1);


set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/npc1/yan" :1,
]));
   set("light_up",10);
   setup();
}
      
