inherit ROOM;

void create()
{  
   
   set("short","���ɽ");
   set ("long", @LONG
�����¶Ƚ���������������û�����ӱ㺹��
���꣬��������������������ϣ�����·��ǵ�
��һ�㣮                    
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */

 "west" : "/open/island/room/i12", 
   "north" : "/open/island/room/m2",
    

]));
  
  set("outdoors", "/open/main"); setup();
}

