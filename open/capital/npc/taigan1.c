
inherit NPC;


void create()
{
          set_name("����̫��",({"soldier"}));
        set("gender","����");
        set("age",30);
        set("attitude", "heroism");
        set("str",45);
        set("cor",45);
        set("cps",45);
        set("con",45);
        set("family/family_name","����");
        set("title","���ڸ���");

        set("long","�����ʳǰ�ȫ��̫�࣬����ְ�أ���ƈ��Ц��\n");
        set("combat_exp",3000000);
          set("force",5000);
          set("max_force",5000);
        set("max_kee",5000);
        set("kee",5000);
       set("force_factor",10);

          set_skill("unarmed",100);
          set_skill("parry",100);
          set_skill("force",100);
          set_skill("dodge",100);
          set_skill("taiganfist",100);
          set_skill("taigan-steps",90);
          set_skill("taiyiforce",100);
          set_skill("taigan-parry",90);
        map_skill("unarmed","taiganfist");
        map_skill("parry","taigan-parry");
        map_skill("dodge","taigan-steps");
        map_skill("force","taiyiforce");

        setup();

        add_money("gold",5);
}

void init() 
{
          object obj;
  
          ::init();
  
            if(interactive(obj=this_player()) && !obj->query_temp("can_in"))
          {
            call_out("kill_ppl",1,obj);
          }
}
int kill_ppl(object obj)
{
              command("say ���˨�,�д̿�,�챣������!!!");
              kill_ob(obj);
             return 1;
}



