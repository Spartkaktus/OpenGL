#pragma once

class IndexBuffer
{
private:
	unsigned int m_RendererID;
	unsigned int m_Count; // how many indicies there are
public:
	IndexBuffer(const unsigned int* data, unsigned int count); //count has to be unsigned int
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	inline unsigned int GetCount() const { return m_Count; }
};