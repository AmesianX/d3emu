#include "Packet.h"

namespace d3emu
{
	// PacketHeaderResponse

	PacketHeaderResponse::PacketHeaderResponse()
	{
	}

	PacketHeaderResponse::PacketHeaderResponse(const char *packet, size_t length)
	{
		PacketHeaderResponse((uint8_t *)packet, length);
	}

	PacketHeaderResponse::PacketHeaderResponse(const uint8_t *packet, size_t length)
	{
		PacketHeaderResponse();

		if (length >= 5)
		{
			this->set_service_id(packet[0]);
			this->set_method_id(packet[1]);
			this->set_request_id(packet[2]);
			this->set_message_size(packet[4]);
		}
	}

	PacketHeaderResponse::PacketHeaderResponse(std::string &packet)
	{
		PacketHeaderResponse();

		if (packet.length() >= 5)
		{
			this->set_service_id(packet[0]);
			this->set_method_id(packet[1]);
			this->set_request_id(packet[2]);
			this->set_message_size(packet[4]);
		}
	}

	void PacketHeaderResponse::set_request_id(uint8_t request_id)
	{
		this->request_id_ = request_id;
	}

	void PacketHeaderResponse::set_message_size(uint8_t message_size)
	{
		this->message_size_ = message_size;
	}

	void PacketHeaderResponse::set_method_id(uint8_t method_id)
	{
		this->method_id_ = method_id;
	}

	void PacketHeaderResponse::set_service_id(uint8_t service_id)
	{
		this->service_id_ = service_id;
	}

	uint8_t PacketHeaderResponse::service_id() const
	{
		return this->service_id_;
	}

	uint8_t PacketHeaderResponse::method_id() const
	{
		return this->method_id_;
	}

	uint8_t PacketHeaderResponse::request_id() const
	{
		return this->request_id_;
	}

	uint8_t PacketHeaderResponse::message_size() const
	{
		return this->message_size_;
	}

	std::string PacketHeaderResponse::SerializeAsString() const
	{
		char bytes[5] = { this->service_id(), this->method_id(), 
			this->request_id(), 0x00, this->message_size() };
		return std::string(bytes, bytes + 5);
	}

	// PacketHeaderRequest

	PacketHeaderRequest::PacketHeaderRequest()
	{
	}

	PacketHeaderRequest::PacketHeaderRequest(const char *packet, size_t length)
	{
		PacketHeaderRequest((uint8_t *)packet, length);
	}

	PacketHeaderRequest::PacketHeaderRequest(const uint8_t *packet, size_t length)
	{
		PacketHeaderRequest();

		if (length >= 6)
		{
			this->set_service_id(packet[0]);
			this->set_method_id(packet[1]);
			this->set_request_id(packet[2]);
			this->set_message_size(packet[5]);
		}
	}

	PacketHeaderRequest::PacketHeaderRequest(std::string &packet)
	{
		PacketHeaderRequest();

		if (packet.length() >= 6)
		{
			this->set_service_id(packet[0]);
			this->set_method_id(packet[1]);
			this->set_request_id(packet[2]);
			this->set_message_size(packet[5]);
		}
	}

	void PacketHeaderRequest::set_request_id(uint8_t request_id)
	{
		this->request_id_ = request_id;
	}

	void PacketHeaderRequest::set_message_size(uint8_t message_size)
	{
		this->message_size_ = message_size;
	}

	void PacketHeaderRequest::set_method_id(uint8_t method_id)
	{
		this->method_id_ = method_id;
	}

	void PacketHeaderRequest::set_service_id(uint8_t service_id)
	{
		this->service_id_ = service_id;
	}

	uint8_t PacketHeaderRequest::service_id() const
	{
		return this->service_id_;
	}

	uint8_t PacketHeaderRequest::method_id() const
	{
		return this->method_id_;
	}

	uint8_t PacketHeaderRequest::request_id() const
	{
		return this->request_id_;
	}

	uint8_t PacketHeaderRequest::message_size() const
	{
		return this->message_size_;
	}

	std::string PacketHeaderRequest::SerializeAsString() const
	{
		char bytes[6] = { this->service_id(), this->method_id(), 
			this->request_id(), 0x00, 0x00, this->message_size() };
		return std::string(bytes, bytes + 6);
	}
}