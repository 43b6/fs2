inherit ROOM;

void create()
{  
   
   set("short","ũׯ��Ժ");
   set ("long", @LONG
������һ��Сũׯ�����ƺ�����������Ψһ�Ľ�
��������Ǽ�Ϊ���ĵİ��裬ס�������ũ��
����֪��Щʲô��
                     
LONG);
   set("light_up", 1);
set("objects", ([ /* sizeof() == 2 */
  "/open/start/npc/hen" : 2,
  "/open/island/npc/farmer" : 1,
]));
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
 
   "south" : "/open/island/room/i12",
    

]));
  

 setup();
}

