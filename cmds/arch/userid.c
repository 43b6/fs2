//      userid.c
//
//      Written by Lucier@CatWorld
//
//      This object will open one socket to connect an authentication
//      server at player's remote system. Through the player socket 
//      and the socket we just created, it will get the player's login 
//      name on his system , so we can check some multi-login players 
//      out by that. :)
//      Unfortunately, there have some problems on it. First, if there
//      doesn't have authentication daemon on the player's system. The
//      connection will be refused, so we can't get correct name. 
//      And, if remote system have a firewall server between the driver
//      and the player's machine, the connection will be refused again.
//      So, this command only can be used on some OS, it has authenti-
//      cation daemon & can be connected. Not good, isn't it...:(

#define MUD_PORT __PORT__

#include <net/socket.h>

inherit F_CLEAN_UP;

nomask int remote_port;
object obj, temp;

int help();

void create() { seteuid(getuid(this_object())); }

int main(object me, string str)
{
        string socket, address;
        int port, socket_port, tmp;
        
        if(!str)        return help(); 
        
        obj = find_player(str);
        temp = previous_object();
        
        if( !obj ) return notify_fail("û�������ҡ�\n");
        
        socket = socket_address(obj);
        
        if(!socket)     return notify_fail("��Ѱ��� address ʧ�ܣ�\n");
        
        if(sscanf(socket, "%s %d", address, port) != 2)  
                return notify_fail("���� address ֵ����\n");
        
        remote_port = port;
        
        socket_port = socket_create(STREAM, "none");
        
        if(socket_port < 0)     return notify_fail("���� socket ʧ�ܣ�\n");
        
        tmp = socket_connect(socket_port, address + " 113", "read_callback", "write_callback");
        
        write(tmp + "\n");
        
        if( tmp < 0) {
                socket_close(socket_port);
                return notify_fail("���� socket ʧ�ܣ�\n" 
                        + socket_error(tmp) + "\n");
        }
        
        return 1;
}

void write_callback(int socket_port) {
        int error;
        
        error = socket_write(socket_port, remote_port + "," + MUD_PORT + "\n");
        
        if(error < 0) {
                socket_close(socket_port);
                tell_object(temp, "socket ������������\n" 
                        + socket_error(error) + "\n");
        }
}

void read_callback(int socket_port, mixed info) {
        string tmp, machine, name;
        
        tell_object(temp, info+"\n");
        if( !info
        || sscanf(info,"%s : USERID : %s :%s\r\n", tmp, machine, name) != 3 ) {
                socket_close(socket_port);
                tell_object(temp,  "socket ������������\n" + info + "\n");
                return;
        }
        
        tell_object(temp, obj->name() + "(" + capitalize(obj->query("id"))
                + ")��" + query_ip_name(obj) + "���ʺ�Ϊ��" + name + "\n");
        socket_close(socket_port);
}

int help()
{
        write(@HELP
ָ���ʽ��userid [ʹ��������]

��ѯ������ʹ��������Դ��ʹ�õ��ʺ�Ϊ�Ρ� (�����ڹ���վ��)

HELP );
        return 1;
}

