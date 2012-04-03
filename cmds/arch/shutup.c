inherit F_CLEAN_UP;

int main(object me,string arg)
{
        string str,onoff,name,reason;
        object ob;
        if(!arg||arg=="") return notify_fail("��Ҫ��˭�����ָ�ԭ״?\n");
  if(sscanf(arg,"%s %s",str,onoff)!=2)
                return notify_fail("ָ���ʽ: shutup <target> <on/off>\n");
        if(!ob=find_player(str)) return notify_fail("û��������.\n");
if(ob==me) return notify_fail("�Լ���齺����������..\n");
        if(onoff!="on"&&onoff!="off")
                return notify_fail("ָ���ʽ: shutup <target> <on/off>\n");
        if(wiz_level(me)<=wiz_level(ob))
return notify_fail("���ϴ����?.������????.\n");
        if(onoff=="on") {
                ob->set("shutup",onoff);
                write("��ȡ����"+ob->name()+"����Ƶ����Ȩ��.\n");
log_file("static/SHUTUP", sprintf("[%s] %s shutup <%s> .\n",
ctime(time())[0..15], geteuid(this_player(1)),ob->query("id")));
                return 1;
     }
        ob->delete("shutup");
        write("�㿪��"+ob->name()+"����Ƶ����Ȩ��.\n");
log_file("static/SHUTUPO", sprintf("[%s] %s shutup <%s> off.\n",
ctime(time())[0..15], geteuid(this_player(1)),ob->query("id")));
        return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ: shutup <target> <on/off>

����ָ�������һ�����ʧȥʹ��Ƶ����Ȩ��.
shutup <target> on ʱ, ����رնԷ���Ƶ��, Ҳ���ǲ��öԷ�ʹ��Ƶ��.
shutup <target> off ���ǻָ�ԭ״.
HELP);
        return 1;
}

