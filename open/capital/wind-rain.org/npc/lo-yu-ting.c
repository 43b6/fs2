// by roger

#include <ansi.h>
##include "castle.h"
inherit NPC;
void create() {
        
        set_name("������",({"lo yu-ting","lo"}));
        set("title","��������");
        set("long",@LONG
   �����־�ʫ������������С����, 
   ������ͬ����, Ҳ�� �����书��
   ѧ��, �Ǹ�ʮ���Ͻ���Ů��.
LONG);
        set("age",20);
        set("str",30);
        set("int",30);
        set("spi",30);
        set("cor",30);
        set("kar",30);
        set("cps",30);
        set("race","����");
        set("gender","Ů��");
        set("attitude","aggressive");
        set("class","fighter");
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",5000);
        set("force",5000);
        set("force_factor",10);
        set("combat_exp",1000000);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",150);
        set_skill("beauty-fingers",100);
        set_skill("force",150);
        map_skill("unarmed","beauty-fingers");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("clan_kill",1);
        setup();
        carry_object(C_OBJ"/sun_red_cloth")->wear();
        add_money("gold",10);
 }


