#include <ansi.h>
inherit NPC;

int kill_him(object);

void create() {
set_name("��Ͼ",({"ashura"}));
        set("long",
"\n�������ɵ�����Ů�ӣ����Ǳ������������ޡ�\n");
        set("age",17);
        set("gender","Ů��");
set("str",40);
set("cor",35);
set("attitude","aggressive");
set("max_gin",4500);
set("max_kee",2000);
set("max_sen",4200);
set("max_force",10000);
set("force",10000);
set("force_factor",40);
set("combat_exp",3000000);
set_skill("unarmed",120);
set_skill("dodge",120);
set_skill("move",120);
set_skill("parry",120);
set_skill("ashura-dance", 120);
        map_skill("unarmed", "ashura-dance");
        map_skill("parry","ashura-dance");
        set("chat_chance",50);
        set("chat_msg",({
      }));
        setup();
 }

void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) {
           remove_call_out("kill_him");
           call_out("kill_him",0,obj);
        }
 }

