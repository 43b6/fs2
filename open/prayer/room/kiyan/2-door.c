//open/prayer/room/kiyan/2-door.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG
	
     ,,,,,,,,   ,,,,,,,,  ,,,,      ,,,,,,,         ,;;;;;,,   ,,,,,,,,
     ;,,,,,;;   ;,,,,,;;  ;;  ';   ;;;,,,,;;        ;;,,,,;;   ;,,,,,;;
     ;''''';;   ;''''';;  ;; ,;'   ';''''';;        ;;'''';;   ;''''';;
     ;;''''''   '''''';;  ;; ';,    '''''''         ;;,,,,;;   ;,,,,,;;
     ;   ,,,,,,,,,,   ;;  ;;  ,;,;;;'';;'''';;,,,   ;;'''''          ;;
    ,;     ;;  ;;     ;;  ;;,;;'  ,,;'';;;,,   '    ;'               ;;
    ;; ,,,,;;,,;;,,,, ;;  ;;    ''' ,,'',;'';;     ;;                ;;
   ;;     ,;   ;;     ;;  ;;    ,,;'',,;'  ,;'    ,;'                ;;
  ;;     ,;'   ;;     ;;  ;;     ,,;;'  ,,;;     ;;'                 ';,
 ''     ''     ''      '  ''           '''       ''                   ''

LONG);
        set("item_desc", ([ /* sizeof() == 1 */
        "north" : (: look_door,     "north" :),
]));

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"21",		//���䳡
        "west":"/open/prayer/room/westarea/road24",	//��·
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/door-looker" : 2,		//�������� 
   		
]));
        set("light_up", 1);
        create_door("north","ʥ����ƾ��ִ���", "south",DOOR_CLOSED);
  setup();
}
