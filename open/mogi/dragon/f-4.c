//castle by roger
//steal by casey                                       
inherit ROOM;                                           
#include <ansi.h>                                       
void create () {                                        
set ("short", MAG"�������"NOR);                    
        set ("long","                                   
�����ǹ��еĽ��� ,ƽ�ճ��˹���֮��û���κ���
���Խ������� ,�Ĵ����һƬ ,�����е���Ʈɢ����
ζ�������Ƴɵ�����(railings)�ƺ��������״򿪡�

");                                                     
                                                        
        set("evil", 1);                                 
        set("no_auc", 1);                               
        set("no_transmit", 1);                          
        set("light_up",-1);                             
        set("exits", ([ /* sizeof() == 3 */             
                                                        
     "down" : __DIR__"endroom",                      
                                               
      ]));                                     
                                               
                                               
       set("item_desc", ([ /* sizeof() == 2 */ 
  "railings" : "�����Ƶ�դ�� ,�ƺ���Ҫ������ײ������(crash)...                                               
  ",]));                                       
                                               

                                                      
        setup();                                      
}                                                     
void init()                                           
{                                                     
        add_action("do_collide", "crash");          
}                                                     
                                                      
int do_collide(string str){                           
                                                      
   object me;                                         
        me = this_player();                           
                                                      
        if(!str || str != "railings"){                    
                return notify_fail("����ײ���\n"); 
                           return 1;                  
                                 }                    
        if(me->query("force",1) < 2000){              
                                                      
             message_vision("$N����ȫ������һײ,������������,�����Ʒ粻����\n",me);                                                                              
                                                                                
                                                                                
                           return 1;                                            
                                        }                                       
                                                                                
            me->add("force",-2000);                                             
            message_vision(HIY"$N����ȫ������һײ��դ����ײ��һ��ȱ��!!\n",me);                                                                            
            tell_object(me,HIR"\n��ľ�ȫ������,�������ѡ�\n"NOR);              
            set("exits/enter",__DIR__"f-5");                                  
                  set_temp("have_open",1);                                      
                  remove_call_out("do_closed");                                 
                  call_out("do_closed",15);                                     
                  return 1;                                                     
                                                                                
                                                                                
}                                                                               
void do_closed()                                                                
{                                                                               
                                                                                
        delete_temp("have_open");                                   
        delete("exits/enter");                                      
        tell_room(this_object(),"դ����Ȼ�����Ļظ�ԭ״�ˡ�\n");        
}                                                                   

