#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void do_heal();
void create()
{
        set_name("����", ({ "han toung", "han" }) );
        set("long","��˫�۾������� һ�������ڹ��������ﻯ���ĸ��� ,����ֻ��ĬĬ
        ��վ������ ,�ƺ��ػ����൱��Ҫ�Ķ�����\n");
        set("gender", "����" );
        set("class","swordsman");
        set("nickname","�ɽ���һ��ʿ");
        set("age", 29);
        set("combat_exp",700000);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("family/master_name","֣ʿ��");
        set_skill("shasword",90);
       map_skill("sword","shasword");
        set_skill("shaforce",60);
        set_skill("sha-steps",60);
        set("max_force",1000);
	set("force",100);
        set("max_gin",100);
        set("force_factor",15);
        set("gin",100);
        set("max_kee",5000);
        set("kee",5000);
        set("chat_chance_combat",10);
        set("chat_msg_combat",({
        (: do_heal :)
        }));
        set("max_mana",100);
        set("mana",100);
        set_skill("force",40);
        set_skill("dodge",60);
        map_skill("dodge","sha-steps");
        set_skill("sword",60);
        map_skill("force","shaforce"); 
        set_skill("unarmed",90);
        setup();
        carry_object("/open/gsword/obj/heaven-sword.c")->wield();
        }
 
  void do_heal()
  {
    message_vision("����һ�ɲ�����ľ��� ,ʹ�����ƺ����л�����\n",this_object());
     this_object()->add("kee",200);
   }
   
