inherit NPC;
void create()
{
        set_name("����", ({ "chi un","chi","un" }) );
        set("class","badman");
        set("gender", "����" );
        set("age", 45);
        set("long", "һ�������������������һ����\n���¶�������˹ȣ�����ȴ����\n��֪����Ϊ�ζ�����ڡ�\n");
        set("combat_exp",100000);
        set("max_kee",5000);
        set("kee",5000);
        set("max_sen",1500);
        set("sen",1500);
        set("max_gin",1500);
        set("gin",1500); 
        set("max_force",4000);
        set("force",4000);
        set("force_factor",10);
        set("bellicosity",2000);
        set("title","��ض�");
//        set("functions//level",30);
        set_skill("parry",80);
        set_skill("dodge",60);
        set_skill("sword",80);
        set_skill("badsword",100);
        set_skill("ghost-steps",100);
        set_skill("force",100);
        set_skill("badforce",200);
        map_skill("dodge","ghost-steps");
        map_skill("force","badforce");
        map_skill("sword","badsword");
        map_skill("parry","badsword");
        set_temp("apply/attack",40);
        set_temp("apply/armor",40);
        set_temp("apply/dodge",40); 
        set("inquiry",([
"������" : "˭û���������¨ڣ��Ҷ������ֻ��Ҫ��һ������˭֪....",
"˭֪" : "˭֪��ǧ�����͵������ȴ�ֱ�͵�ˣ�С�ֵ��ܰ����һ���??",
"�һ�" : "��!!ֻҪ������һ��Ǳ��飬�Ҿ�����ħ�ս���!!",
"��" : "�Ǳ�����Ǽ�������һ����ѧ��ħ�ս��ף����ҵ���Ҳ����������",
"ħ�ս���" : "�Ǳ�����Ǽ�������һ����ѧ��ħ�ս��ף����ҵ���Ҳ����������",
"ħ�ս���" : "ħ�ս����������ݺ����ֵ���ѧ���һ����Ҿͽ���",
]));
//        set("chat_msg_combat",({(: perform_action,"" :)}));
        setup();
        carry_object("/open/gsword/obj/sword.c")->wield();
}
void init()
{
  add_action("do_verify","verify");
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "ħ�ս���" )
          {
          command("pat "+getuid(me));
          command("say �ۡ��������������ܰ����һ�ħ�ս��ס�");
         if( me->query_temp("get_badsword_book",1))
  {
          command("say ��Ȼ������һ���ħ�ս��ף���Լ���Ҿʹ���ħ�ս����ɡ�");
          me->set("get_badsword",1);
          command("say �Ѵ��㲿�ݽ����ˣ������ʹ������Լ�ѧϰ�ˡ�");
          command("say Ҫ���ֱ�Ӹ���Ҫ(verify book)��");
          command("say ����ȥ��˾����ѧ(llearn)ϰ����");
  }
       else 
  {
       command("say �ⲻ�����Լ�Ѱ�����ģ���ƭ�ң���");
  }
          }
}
int do_verify(string arg)
{
object me,ob;
me=this_player();
ob=new("/open/badman/obj/sword_book.c");
 if( arg!="book")
   {
    command("say ��Ҫʲô������");
    return 1;
   }
if(me->query("get_badsword")!= 1)
      {
    command("say ����û�����һ��飬����ô����ڣ�");
    return 1;
      }
if (present("badsword book", me))
       {
    command("say ���Ѿ����˲�����");
      return 1;
       }
   else
        {
    command("say �ú����ɣ�");
    ob->move(me);
         return 1;

        }
}
