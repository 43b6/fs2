#include <ansi.h>
inherit NPC;
string do_game();
void create()
{
        seteuid(getuid());
        set_name("СŮ��",({"little girl","girl"}));
        set("long",@LONG
һ��СŮ��������һ����������Ϸ���������ù¶����ÿ����!!
LONG);
        set("gender","Ů��");
        set("combat_exp", 1000);
        set("attitude","friendly");
        set("age",12);
        set("force",5000);
        set("max_force",5000);
        set("kee",1000);
        set("max_kee",1000);
        set("force_factor",30);
        set("inquiry", ([
        "����Ϸ" : (: do_game :),
        ]));
        set("chat_chance", 5);
        set("chat_msg", ({
        "СŮ����: ��!һ��������Ϸ�����ģ���û���˿��������档\n",
        }));
        setup();
}
void init()
{
  object ob;
    add_action("do_answer","answer");
  if(interactive(ob =this_player())) {
  call_out("greeting",1,ob);
  }
}
void greeting(object me)
{
if(!me) return;
if(me->query("get-evil-mblade") && me->query("title")=="[1;32m��[1;37m��[1;32m��[1;37m��[0m") return;
if(me->query("mk-blade")) {
if(me->query("gender")=="����" && me->query("title")!="[1;37m����[1;33m����[0m")
{
me->set("title",HIW"����"HIY"����"NOR);
message_vision(HIW"\n�׹�ɢȥ$N�ĳƺ�������ϡ�\n"NOR,me); 
}
else if(me->query("gender")=="Ů��" && me->query("title")!="[1;34m����[1;36m�ļ�[0m")
{
me->set("title",HIB"����"HIC"�ļ�"NOR);
message_vision(HIW"\n�׹�ɢȥ$N�ĳƺ�������ϡ�\n"NOR,me);
}
}
}
int set_number()
{
    int i,s,j,flag,num,sub,temp,k;

    num=0;
    for(i=0;i<4;i++){
      s=random(10);
      sub=1;
      for(j=0;j<i;j++)
        sub*=10;
      if(i){
        flag=0;
        temp=sub;
        k=num;
        do{
          temp/=10;
          if((k/temp)==s)
            flag=1;
          else
            k=k%temp;
        }while(temp>1);
        if(flag){
         i--;
         continue;
        }
      }
      num+=s*sub;
    }
    return num;
}
string do_game()
{
    object ppl=this_player();
    int num;
    string number;

    if(ppl->query_temp("number_quest"))
      return "�����ڸ����氢!!!\n";

    number="";
    num=set_number();
    if(num<1000)
      number+="0";
    number+=sprintf("%d",num);
    ppl->set_temp("number_quest/number",number);
    tell_object(ppl,"СŮ��˵��:��Ҫ��������Ϸ������̫����!!!\n");
    tell_object(ppl,"СŮ��˵��:���������������������Ϸ��\n");
    tell_object(ppl,"СŮ��˵��:�һ��"HIY"������"NOR"ѡ�ĸ����ظ������������?\n");
    tell_object(ppl,"СŮ��˵��:�����µ���������һ��λ������ȷ�ģ��һ�˵["HIR"һ��"NOR"]��\n");
    tell_object(ppl,"СŮ��˵��:�����һ����µ����ֶԣ�����λ�ò���ȷ���һ�˵["HIC"һ��"NOR"]��\n");
    tell_object(ppl,"СŮ��˵��:������������£������["HIR"����"NOR"]����ȫ�����ˣ��һ�����һ��С���\n");
    tell_object(ppl,"СŮ��˵��:���벻���������"HIG"(answer yes/no)"NOR"?\n");
    return "";
}
int do_answer(string arg)
{
    object ppl=this_player();
    int num,i,a,b,s,sub,temp,k,j,time;
    string ans,txt;
    string out="";

    if(!arg) return 0;
    if(!ppl->query_temp("number_quest")) return 0;
    if(!ppl->query_temp("number_quest/time")){
      if(arg=="yes"){
        tell_object(ppl,"СŮ��˵��:��Ҫ������?!̫���ˡ�\n");
        tell_object(ppl,"СŮ��˵��:���Ѿ���������ˣ��㿪ʼ�°�(answer ����)��\n");
        ppl->add_temp("number_quest/time",1);
        return 1;
      }
      else if(arg=="no"){
        tell_object(ppl,"СŮ��˵��:ԭ���㲻����......�Ҷ��ˡ�\n");
        ppl->delete_temp("number_quest");
        command("cry");
        return 1;
      }
      else return 0;
    }
    else{
      tell_object(ppl,HIG"��˵:�Ҳ�"+arg+"��\n"NOR);
      ppl->add_temp("number_quest/time",1);
      if(sizeof(arg)!=4){
        tell_object(ppl,"��Ҫ�ش������λ������!!\n");
        return 1;
      }
      for(i=0;i<4;i++){
        txt=arg[i..i];
        sscanf(txt,"%d",num);
        if(num< 0 || num > 9){
          tell_object(ppl,"��Ҫ�ش������λ������!!\n");
          return 1;
        }
      }
      for(i=0;i<3;i++)
        for(j=i+1;j<4;j++)
          if(arg[i]==arg[j]){
            tell_object(ppl,"��Ҫ���ĸ����ظ��������!!\n");
            return 1;
          }
      ans=ppl->query_temp("number_quest/number");
      a=0;
      for(i=0;i<4;i++)
        if(ans[i]==arg[i]) a++;
      b=0;
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          if(i==j) continue;
          else if(ans[i]==arg[j]) b++;
      if(!a && !b) out="��û�µ�";
      else{
       if(a) out+=HIR+CHINESE_D->chinese_number(a)+"��"+NOR;
       if(b) out+=HIC+CHINESE_D->chinese_number(b)+"��"+NOR;
      }
      tell_object(ppl,"["+out+"]��\n");
      if(a==4){
        command("say "+ppl->query("name")+"������ร��µ��ˡ�");
        command("say �ոհ�������һ�£����ܹ�����"+
          CHINESE_D->chinese_number(ppl->query_temp("number_quest/time")-1)+"�Ρ�");
        time=ppl->query_temp("number_quest/time")-1;
        if(time<=7){
          command("say ��������ô�����ķ��ϣ��������ʹ�û����ȵ�fanset����!!");
          ppl->set_temp("can_fanset",1);
        }
        else{
          command("say ���㽱Ʒ��kiss һ����");
          command("lkiss "+ppl->query("id"));
        }
        command("smile");
        ppl->delete_temp("number_quest");
      }
      return 1;
    }
    return 0;
}
