// by roger

inherit NPC;
#include <ansi.h>
int do_acc();
int do_acc1();
void make_sword();

void create()
{      
        set("nickname","�ɶ��칤");
        set_name("������",({"lee"}));
        set("gender","����");
        set("age",58);
        set("str",30);
        set("long","
һ���¶������ˣ���ħ��������һЩ�����ͷ���Ϊ��������ħ�����˳���
Ҫ��ħ���ȥð�գ���˱����ͻ��ߵ�����Ҳ����ġ�������ϸһ����������
�����������������ַ�������ԼԼ���书��Ӱ�ӣ����Ƚ��쳣��ʾ����������
Ϊ�ǳ�����ѵ����Ĺ�ȥ��ʲô���˵���ҵ��?
\n");   
        set("inquiry",([
        "Ѹ�׽�" : (:do_acc:),
        "���ױ���" : (:do_acc1:),       
       // "��ȥ" : (:do_acc2:),  
        ]));
        add_action("do_acc","acc");
        set("combat_exp",1000000);
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",3000);
        set("force",5000);
        setup();
}
int accept_fight(object who)
{
 return notify_fail("������˵:�Ϸ�ܾò�������...\n");
}
int accept_kill(object who)
{
 return notify_fail("������˵:�Ϸ�ܾò�������...\n");
}
int do_acc()
{
object me;
me = this_player();
    if(me->query("quest/tunder_sword")!=1){
    command("say ��˵����ѽ�������������ʧ���ˡ�");
    return 0;
                                           }
    else{
          if(!present("tunder_sword",me)){
    command("say ʲô...��...�㾹Ȼ֪������...�������Ű�..");
    command("say ����ţ����Ϸ�Ϊ������������ʧ���Ľ�!");
    tell_object(me,HIY"���������۾�ͻȻ���Ⱪ��...\n"NOR);
    tell_object(me,HIY"��������ʼ��������...\n"NOR);
    call_out("make_sword",10,me);
                                        }
         else{
         command("say �㲻���Ѿ���һ����??");
         return 0;
             }
        }
}

void make_sword(object me)
{
   object me=this_player();
    tell_object(me,HIB"�����Ȼ��������....\n"NOR);
    command("say ��...����������...�����ұ����Ĺ���...");
    command("say ��ȥ�ɣ�����ƾ��˽�ն����ħ!!");
    new("/u/r/roger/castle/obj/tunsword")->move(me);
    /*�ŵ�open�¸�Ϊ/open/mogi/castle/obj/tunsword*/
}
int do_acc1()
{
 object me;
   if(me->query("quest/save_yan")!=1){
     command("say ����˵ʲô?");
     return 0;
                                     }
   else{
     if(me->query("bank/coin",1)<500000){
     command("say �⻤�׺ܹ���Ĵ�����֧��(��50���ƽ�)");
     return 0;
                                         }
     else{
     command("say û���⣬���ϴ����");      
     tell_object(me,HIY"����������һ����ᳯ���\n"NOR);
     new("/u/r/roger/castle/obj/gold-hat")->move(me);
     /*�ŵ�open�¸�Ϊ/open/mogi/castle/obj/gold-hat */
         }
}


