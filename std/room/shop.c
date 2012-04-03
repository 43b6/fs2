//shop.c by chun 1995.10.19
#include <ansi.h>
#include <room.h>

inherit ROOM;
inherit CHINESE_D;
inherit F_FINANCE;
inherit F_MORE;


#include <shop.h>
mapping sells = ([ ]);          //      sells[id] = short();
mapping names = ([ ]);          //      names[id] = file_name(id);
mapping v = ([ ]);              //      v[id] = value;
mapping tradename = ([ ]);      //      tradename[id] = id;
mapping total = ([ ]);          //      total[id]=����;
int goods_amount;               //      ����Ʒ����

void do_more(object me, string cmd , int line );
int sell_ob(object ob, int trade_lv);
int sell_all(int trade_lv);
int new_list(object ppl,string arg);
int delete_sell_all(object ppl);

void create()
{
  seteuid(getuid());
  set("no_clean_up",1);
}

void init()
{
  add_action("do_sell","sell");
  add_action("do_buy","buy");
  add_action("do_list","list");
  add_action("do_value","value");
  add_action("do_view","view");
  if(wizardp(this_player())) add_action("do_know","know");
}

void buy_thing(string arg)
{
  if(total[arg] > 1)
    total[arg]--;
  else{
    map_delete( tradename , arg );
    map_delete( sells , arg );
    map_delete( names , arg );
    map_delete( v , arg );
    map_delete( total,arg);
  }
}


int do_value(string arg)
{
  object *inv;
  if(arg)
  return 0;
  inv=all_inventory(this_player());
  if(!inv)
  return notify_fail("������û���κζ����ɹ����ۡ�\n");
  printf(HIC "�����ϴ�����Щ������\n%s" NOR,
    implode(map_array(inv,"ob_value",this_object()),"") );
  return 1;
}

int do_sell(string arg)
{
  object ob, me=this_player();
  int trade_lv, index=1;

  if( !arg )
    return notify_fail("��Ҫ��ʲô������\n");

  // ���� trade skill �� 1..100 ֮��
  if(!trade_lv = me->query_skill("trade",1) )
    trade_lv = 1;
  if (trade_lv>100) trade_lv = 100;

  if(arg=="all"){
    if(this_player()->query_temp("just_sell_all"))
      return notify_fail("�̵��ϰ�˵��:�һ�����������ո����Ķ���, �鷳���һ��!!\n");
    else
      return sell_all(trade_lv);
  }

  // �����������ڶ�����Ʒ, good ����
  if (sscanf (arg, "%s %d", arg, index) == 2)
    if (index < 1) index = 1;

  if( !(ob = present(arg+" "+index, me)) )
    return notify_fail("Ҫ���գ�\n");

  if (!sell_ob(ob, trade_lv))
    write ("������ʧ��.\n");
  else
    write ("������.\n");
  return 1;
}

int sell_all(int trade_lv)
{
  object *inv;
  int i,max;

  inv = all_inventory(this_player());
  max=sizeof(inv);
  if(max>7) max=7;
  for (i=0; i<max; i++)
    sell_ob(inv[i], trade_lv);
  this_player()->set_temp("just_sell_all",1);
  call_out("delete_sell_all",3,this_player());

  write ("������.\n");
  return 1;
}

int sell_ob(object ob, int trade_lv)
{
  object me=this_player();
  string arg,file_name,temp;
  int valu;

  if(!ob) return 0;
  arg = ob->query("id");
  valu=ob->query("value");
  if( ob->query("no_drop") || ob->query_temp("secured") || ob->query("no_sell") )
    return 0;

  if (ob->query("money_id"))
    return 0;

    if(!valu){
    write ("������û��ֵ�Ķ���, ���ϰ忴��һ�۾Ͷ�������Ͱ��.\n");
    destruct(ob);
     return 1;
    }
    if(!intp(valu)){
     write ("������û��ֵ�Ķ���, ���ϰ忴��һ�۾Ͷ�������Ͱ��.\n");
    destruct(ob);
     return 1;
    }
   if (valu < 100) {
    write ("������û��ֵ�Ķ���, ���ϰ忴��һ�۾Ͷ�������Ͱ��.\n");
    destruct(ob);
    return 1;
  }

  valu=(int)(valu/400*(300+trade_lv));
  printf("���յ��йŻ�Ҫ����ۿۣ�\n������%s�õ�%s\n",ob->short(),
        cvalue(valu) );
  me->pay_player(valu);
  message_vision(HIC "$N����һ"+ob->query("unit")+ob->query("name")+"\n" NOR,
    me );
  if(      me->query_skill("trade",1)
        || me->query_skill("trade") < 100 )
    me->improve_skill("trade",(random(me->query("int"))+
          random(me->query("per"))/2) );

  file_name=base_name(ob);
  if(!sscanf(file_name,"%s.c",temp)) file_name+=".c";
  if(names[arg] != file_name) {
    v[arg] = (int)ob->query("value");
    names[arg] = file_name;
    sells[arg] = ob->short();
    tradename[arg] = arg;
    total[arg]=1;
  }
  else{
    total[arg]++;
  }
  destruct(ob);
  return 1;
}

int do_list(string arg)
{
  string *k;
  if( arg )
    return new_list(this_player(),arg);

  printf("����������򵽣�\n");
  if( !k=keys(sells) ) return 1;
  else do_more(this_player(), "",0);
  return 1;
}


int do_buy(string arg)
{
  object ob, me=this_player();
  int trade_lv,valu,per;
  per=me->query("per");
  if(!trade_lv=me->query_skill("trade",1) )
    trade_lv = 1;
  if( !arg )
    return notify_fail("��Ҫ��ʲô������\n");
  if( arg != tradename[arg] ){
    write("����û�������ֶ���������ø���˵������ȫ����\n");
    return 1;
  }
  if (trade_lv > 100) trade_lv = 100;
  valu=v[arg]/100*(230-trade_lv);
  if(per > 20)
  {
    valu=valu - v[arg]*per/100;
    write("�̵��ϰ�˵: ��������ô������,��������˵��...\n");
  }
  if(me->can_afford(valu))
  {
    me->pay_money(valu);
    ob = new(names[arg]);
    ob->move(me);
    buy_thing(arg);
    message_vision("$N����"+cvalue(valu)+
                   "������һ"+ob->query("unit")+ob->short()+"\n",
                   me );
    if (me->query_skill("trade",1) ||
       me->query_skill("trade") < 100 )
    {
      me->improve_skill("trade",random( me->query("int") + per/2 ) );
    }
    else {
      tell_object(me,HIB "��û���ʺϵĻ�������" NOR+
      sells[arg]+"\n");
    }
  }
  else
    message_vision("$N����û���㹻��Ǯ��������\n", me);
  return 1;
}

void do_more(object me, string cmd , int line )
{
  int i;
  string *k, list="";
  k = keys(sells);

  switch(cmd) {
    case " ":
    case "":
    if( sizeof(k) < 24 ) {
        for(i = line; line<sizeof(k); line++)
            list += sprintf("%-50s"NOR"\t\t�۸�%s\n",sells[k[line]],
                            cvalue(v[k[line]]) );
        me->start_more(list);
        if( line >= sizeof(k) ) return;
        break;
    }
    else {
        for(i = line + 20; line<sizeof(k) && line<i; line++)
            list += sprintf("%-50s"NOR"\t\t�۸�%s\n", sells[k[line]],
                            cvalue(v[k[line]]) );
        if( line >=sizeof(k) ) return;
        me->start_more(list);
        break;
    }
    case "b":
        line = line - 40;
        if(line<-19) return;
        for(i=line + 20; line < i;line++)
            list += sprintf("%-50s"NOR"\t\t�۸�%s\n", sells[k[line]],
                            cvalue(v[k[line]]) );
        break;
    case "q":
        return;
  }
}
int new_list(object ppl,string arg)
{
    int i,j,flag,cnt,page,start,end;
    string kind,list,temp;
    string *k;
    mapping final=([ ]);
    object ob,aa,bb;


    if(!ppl) return 1;
    page=0;
    if(sscanf(arg,"%s %d",temp,page)==2){
      arg=temp;
    }
    if( arg != "other")
    if( member_array(arg, ALLOW_CHOICE) == -1 )
    {
      write("��Ϊû����Ҫ��ѡ��, ���Ծ���һЩ���㿴!!\n");
      do_list(0);
      return 1;
    }
    if( member_array(arg, ARMOR_CHOICE) !=-1 )
      kind="armor_type";
    else if( member_array(arg, WEAPON_CHOICE) !=-1 )
      kind="skill_type";
    else if( arg== "other")
      kind="other";
    else {
      write("��Ϊû����Ҫ��ѡ��, ���Ծ���һЩ���㿴!!\n");
      do_list(0);
      return 1;
    }
    list="";
    k=keys(names);
    cnt=0;


    for(i=0;i<sizeof(k);i++){
      if(!sscanf(names[k[i]],"%s.c",temp)) names[k[i]]+=".c";
      if(file_size(names[k[i]]) <1) continue;
      ob=new(names[k[i]]);
      if(arg=="other"){
        if(ob->query("skill_type") || ob->query("armor_type")) continue;
      }
      else if(arg=="armor"){
        if(!ob->query("armor_type")) continue;
      }
      else if(arg=="weapon"){
        if(!ob->query("skill_type")) continue;
      }
      else{
        if(!ob->query(kind)) continue;
        if(ob->query(kind)!=arg) continue;
      }
      final[cnt]=names[k[i]];
      cnt++;
    }
    if(!cnt)
      return notify_fail("���Ǳ�Ǹ������Ŀǰû����("+KIND_NAME[arg]+")!!\n");

    goods_amount=sizeof(final);
    if(page < 0)
      return notify_fail("�벻Ҫ����Ц!!\n");
    if(page) page--;
    if(page*50 > goods_amount)
      return notify_fail(sprintf("û����ô��ҳ��ֻ��ʾ���� %d ҳ����!!\n",goods_amount/50+1));
    start=page*50;
    if(sizeof(final) - start >=50) end=start+50;
    else end=sizeof(final);
    for(i=start;i<(end-1);i++)
    {
      for(j=i;j<end;j++)
      {
        if(i==j) continue;
        if(call_other(final[i],"query","value") < call_other(final[j],"query","value")){
          temp=final[i];
          final[i]=final[j];
          final[j]=temp;
        }
      }
    }
    for(i=start;i<end;i++)
    {
      ob=new(final[i]);
        list += sprintf("%10s%-30s"NOR"%10s��%-30s ��ʣ%d%s\n", ob->query("name"),"("+ob->query("id")+")","�۸�",
                      cvalue(ob->query("value")),total[ob->query("id")],ob->query("unit"));
    }
    if(!page) page=1;
    if(goods_amount > end)
      list+=sprintf(HIY"��Ϊ��Ʒ̫���ˣ�û�취һ��ȫ���г��������ʹ��list %s %d���鿴ʣ�µ�(%s)��\n"NOR,arg,page+1,KIND_NAME[arg]);
    write("����������򵽵�("+KIND_NAME[arg]+")��:\n");
    ppl->start_more(list);
    return 1;
}

int do_view()
{
    string out="";
    int i;
    string *k;

    k=keys(KIND_NAME);
    out+="����Ŀǰ�ṩ�����������Ʒ��������:\n";
    out+=sprintf("%-10s:%-15s%-10s:%-15s%-10s:%-15s\n","����","����","����","����","����","����");
    out+=sprintf("-----------------------------------------------------------------------------\n");
    for(i=0;i<sizeof(k);i++){
      out+=sprintf("%-10s:%-15s",k[i],KIND_NAME[k[i]]);
      if((i+1)%3==0) out+="\n";
    }
    out+="\n";
    out+="\n
�����ӿɵ����鿴ĳ������Ʒ: list ����
������Ҫ�Ҿ�����Ʒ����list neck
list armor->�г����з���
list weapon->�г���������
list other->�г����Ƿ��߻���������Ʒ

";
    this_player()->start_more(out);
    return 1;
}

int delete_sell_all(object ppl)
{
  if(!ppl) return 1;
  if(!ppl->query_temp("just_sell_all")) return 1;
  ppl->delete_temp("just_sell_all");
  return 1;
}
int do_know()
{
  int amount=sizeof(names);
  printf("����Ŀǰ���� %d ����Ʒ����!!\n",amount);
  return 1;
}
