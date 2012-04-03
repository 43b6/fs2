// master_jen.c

inherit NPC;
inherit F_MASTER;


void create()
  {
        set("class", "fighter");
        set_name("������", ({ "thin jen", "thin", "jen" }) );
        set("title","��ɽ�ɵ���������");
        set("nickname", "ɽ�Ӿ���");
        set("gender", "����");
        set("age", 70);
        set("attitude", "peaceful");
        set("long",
"����������ɽ���г�����͵���������ÿ͡�ά���������������ԣ���������ʮ��ǰ\n"
"����ɱ�����������Ա���������Ҷ��\n");
        set("str", 40);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("kar", 16);
        set("combat_exp",1200000);
             set("env/���","YES");
        set("force"       , 5000);
        set("max_force"   , 4000);
        set("force_factor", 25);
        set("score"       , 200000);
        set_skill("move",100);
        set_skill("unarmed", 100);
        set_skill("force", 100);
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("henma-steps",100);
        set_skill("lungshan",100);
        set_skill("haoforce",100);
        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "lungshan");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
            (: perform_action, "force.kang_kee"   :)
        }));
        setup();
        carry_object("/open/wu/obj/armband")->wear();
        carry_object("/open/wu/obj/silverfinger")->wield();
        carry_object("/open/wu/obj/blu_key");
        add_money("gold",10);
        set_heart_beat(1);
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}
