
// master_jen.c

inherit NPC;


void create()
  {
set("class", "fighter");
        set_name("������", ({ "jen wu shin", "jen", "shin" }) );
        set("title","��ɽ�ɵ�����������");
        set("nickname", "¤ɽ��ͽ");
        set("gender", "����");
        set("age", 65);
        set("attitude", "aggressive");
        set("long",
"���������β��ĵĵܵܣ�Ҳ�����������ʦ�壬���򲻼��β��ģ�����ͼ�ļ�ǿ����\n"
"��ͼ�Զ��ƶ�ɱ�������Զ������λ��ֻ��ϧ�¼���©�����β������ܹ���¤ɽ���\n"
"�ĵ����Ҵ��ʮ�꣬���Գ���ά�����ѱ��ٷ�񣬼��˱�ɱ\n");

        set("str", 48);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("kar", 16);

       set("combat_exp",1000000);
       set("kee",2000);
       set("max_kee",2000);
        set("force"       , 2700);
        set("max_force"   , 2700);
        set("force_factor", 10);
        set("score"       , 200000);

//           set("chat_chance_combat", 80);

/*           set("chat_msg_combat", ({
                (: consider :),
                (: exert_function, "powerup" :),
                (: exert_function, "recover" :)
          }) ); */


        set_skill("move",70);
        set_skill("unarmed", 60);
        set_skill("force", 60);
        set_skill("parry", 70);
	set_skill("dodge",80);
          set_skill("henma-steps",80);
        set_skill("lungshan",70);
        set_skill("haoforce",60);

        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
          map_skill("dodge", "henma-steps");

        set("chat_chance_combat",65);
        set("chat_msg_combat",({
//           (: exert_function, "enforceup" :),

            (: perform_action, "force.kang_kee"   :)
        }));



        setup();

        add_money("gold",10);
}

